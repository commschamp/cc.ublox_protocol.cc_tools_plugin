// Generated by commsdsl2tools_qt v6.3.2

#include "NavSol.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Dop.h"
#include "cc_tools_qt_plugin/cc_ublox/field/EcefVX.h"
#include "cc_tools_qt_plugin/cc_ublox/field/EcefVY.h"
#include "cc_tools_qt_plugin/cc_ublox/field/EcefVZ.h"
#include "cc_tools_qt_plugin/cc_ublox/field/EcefX.h"
#include "cc_tools_qt_plugin/cc_ublox/field/EcefY.h"
#include "cc_tools_qt_plugin/cc_ublox/field/EcefZ.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Ftow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GpsFix.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/PAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/field/SAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavSol.h"

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
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ftow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ftow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ftow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_week(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Week;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gpsFix(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GpsFix;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gpsFix(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "GPSfixOK")
            .add(1U, "DiffSoln")
            .add(2U, "WKNSET")
            .add(3U, "TOWSET")
            .asMap();
}

static QVariantMap createProps_ecefX(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefX;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ecefX(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ecefY(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefY;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ecefY(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ecefZ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefZ;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ecefZ(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_pAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_pAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ecefVX(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefVX;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ecefVX(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ecefVY(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefVY;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ecefVY(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ecefVZ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefVZ;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_ecefVZ(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_sAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_sAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_pDOP(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PDOP;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_dop(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_numSV(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSV;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSolFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_ftow(false));
    props.append(createProps_week(false));
    props.append(createProps_gpsFix(false));
    props.append(createProps_flags(false));
    props.append(createProps_ecefX(false));
    props.append(createProps_ecefY(false));
    props.append(createProps_ecefZ(false));
    props.append(createProps_pAcc(false));
    props.append(createProps_ecefVX(false));
    props.append(createProps_ecefVY(false));
    props.append(createProps_ecefVZ(false));
    props.append(createProps_sAcc(false));
    props.append(createProps_pDOP(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_numSV(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class NavSolImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavSol<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavSolImpl
    >
{
public:
    NavSolImpl() = default;
    NavSolImpl(const NavSolImpl&) = delete;
    NavSolImpl(NavSolImpl&&) = delete;
    virtual ~NavSolImpl() = default;
    NavSolImpl& operator=(const NavSolImpl&) = default;
    NavSolImpl& operator=(NavSolImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSol::NavSol() : m_pImpl(new NavSolImpl) {}
NavSol::~NavSol() = default;

NavSol& NavSol::operator=(const NavSol& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSol& NavSol::operator=(NavSol&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavSol::MsgIdParamType NavSol::doGetId()
{
    return ::cc_ublox::message::NavSol<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavSol::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSol::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSol::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSol::resetImpl()
{
    m_pImpl->reset();
}

bool NavSol::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSol*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSol::MsgIdParamType NavSol::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSol::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSol::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSol::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSol::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSol::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
