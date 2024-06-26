// Generated by commsdsl2tools_qt v6.3.3

#include "NavPvt_u8.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Day.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Dop.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GpsFix.h"
#include "cc_tools_qt_plugin/cc_ublox/field/HAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/field/HMSL.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Heading.h"
#include "cc_tools_qt_plugin/cc_ublox/field/HeadingAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Height.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Hour.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lat.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lon.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Min.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Month.h"
#include "cc_tools_qt_plugin/cc_ublox/field/PsmState.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Sec.h"
#include "cc_tools_qt_plugin/cc_ublox/field/VAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Vel.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Year.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavPvt_u8.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_year(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Year;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_year(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_month(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Month;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_month(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_day(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Day;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_day(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hour(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Hour;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hour(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_min(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Min;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_min(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_sec(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Sec;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_sec(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_valid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Valid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "validDate")
            .add(1U, "validTime")
            .add(2U, "fullyResolved")
            .add(3U, "validMag")
            .asMap();
}

static QVariantMap createProps_tAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_nano(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Nano;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_fixType(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixType;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gpsFix(Field::name(), serHidden);
    return props;
}

struct FlagsMembers
{
    static QVariantMap createProps_lowBits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::LowBits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "gnssFixOK")
                .add(1U, "diffSoln")
                .asMap();
    }

    static QVariantMap createProps_psmState(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::PsmState;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_psmState(Field::name(), serHidden);
        return props;
    }

    static QVariantMap createProps_midBits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::MidBits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "headVehValid")
                .asMap();
    }

    static QVariantMap createProps_carrSoln(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::CarrSoln;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("No carrier", 0)
                .add("Float solution", 1)
                .add("Fixed solution", 2)
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_lowBits(true))
            .add(FlagsMembers::createProps_psmState(true))
            .add(FlagsMembers::createProps_midBits(true))
            .add(FlagsMembers::createProps_carrSoln(true))
            .asMap();
}

static QVariantMap createProps_flags2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(5U, "confirmedAvai")
            .add(6U, "confirmedDate")
            .add(7U, "confirmedTime")
            .asMap();
}

static QVariantMap createProps_numSV(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSV;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_lon(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lon;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lon(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lat(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lat;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lat(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_height(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Height;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_height(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hMSL(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HMSL;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hMSL(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_vAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_vAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_velN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VelN;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_vel(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_velE(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VelE;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_vel(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_velD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VelD;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_vel(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gSpeed(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GSpeed;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_vel(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_heading(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Heading;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_heading(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_sAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_headingAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HeadingAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_headingAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_pDop(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PDop;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_dop(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "invalidLlh")
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_headVeh(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HeadVeh;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_magDec(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MagDec;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

static QVariantMap createProps_magAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPvt_u8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MagAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_year(false));
    props.append(createProps_month(false));
    props.append(createProps_day(false));
    props.append(createProps_hour(false));
    props.append(createProps_min(false));
    props.append(createProps_sec(false));
    props.append(createProps_valid(false));
    props.append(createProps_tAcc(false));
    props.append(createProps_nano(false));
    props.append(createProps_fixType(false));
    props.append(createProps_flags(false));
    props.append(createProps_flags2(false));
    props.append(createProps_numSV(false));
    props.append(createProps_lon(false));
    props.append(createProps_lat(false));
    props.append(createProps_height(false));
    props.append(createProps_hMSL(false));
    props.append(createProps_hAcc(false));
    props.append(createProps_vAcc(false));
    props.append(createProps_velN(false));
    props.append(createProps_velE(false));
    props.append(createProps_velD(false));
    props.append(createProps_gSpeed(false));
    props.append(createProps_heading(false));
    props.append(createProps_sAcc(false));
    props.append(createProps_headingAcc(false));
    props.append(createProps_pDop(false));
    props.append(createProps_flags3(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_reserved3(false));
    props.append(createProps_headVeh(false));
    props.append(createProps_magDec(false));
    props.append(createProps_magAcc(false));
    return props;
}

} // namespace

class NavPvt_u8Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavPvt_u8<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavPvt_u8Impl
    >
{
public:
    NavPvt_u8Impl() = default;
    NavPvt_u8Impl(const NavPvt_u8Impl&) = delete;
    NavPvt_u8Impl(NavPvt_u8Impl&&) = delete;
    virtual ~NavPvt_u8Impl() = default;
    NavPvt_u8Impl& operator=(const NavPvt_u8Impl&) = default;
    NavPvt_u8Impl& operator=(NavPvt_u8Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPvt_u8::NavPvt_u8() : m_pImpl(new NavPvt_u8Impl) {}
NavPvt_u8::~NavPvt_u8() = default;

NavPvt_u8& NavPvt_u8::operator=(const NavPvt_u8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPvt_u8& NavPvt_u8::operator=(NavPvt_u8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavPvt_u8::MsgIdParamType NavPvt_u8::doGetId()
{
    return ::cc_ublox::message::NavPvt_u8<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavPvt_u8::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPvt_u8::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPvt_u8::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPvt_u8::resetImpl()
{
    m_pImpl->reset();
}

bool NavPvt_u8::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPvt_u8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPvt_u8::MsgIdParamType NavPvt_u8::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPvt_u8::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPvt_u8::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPvt_u8::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPvt_u8::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPvt_u8::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
