// Generated by commsdsl2tools_qt v6.3.2

#include "CfgNav5.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res5.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgNav5.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_mask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Mask;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "dyn")
            .add(1U, "minEl")
            .add(2U, "posFixMode")
            .add(3U, "drLim")
            .add(4U, "posMask")
            .add(5U, "timeMask")
            .add(6U, "staticHoldMask")
            .add(7U, "dgpsMask")
            .add(8U, "cnoThreshold")
            .add(10U, "utc")
            .asMap();
}

static QVariantMap createProps_dynModel(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DynModel;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Portable", 0)
            .add("Stationary", 2)
            .add("Pedestrian", 3)
            .add("Automotive", 4)
            .add("Sea", 5)
            .add("Airborne <1g accel", 6)
            .add("Airborne <2g accel", 7)
            .add("Airborne <4g accel", 8)
            .add("Wrist watch", 9)
            .add("Bike", 10)
            .asMap();
}

static QVariantMap createProps_fixMode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixMode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("2D Only", 1)
            .add("2D Only", 2)
            .add("Auto 2D/3D", 3)
            .asMap();
}

static QVariantMap createProps_fixedAlt(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixedAlt;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

static QVariantMap createProps_fixedAltVar(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixedAltVar;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(4U)
            .asMap();
}

static QVariantMap createProps_minElev(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MinElev;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_drLimit(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DrLimit;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_pDop(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PDop;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_tDop(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TDop;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_pAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_staticHoldThresh(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::StaticHoldThresh;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dgnssTimeout(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DgnssTimeout;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cnoThreshNumSVs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CnoThreshNumSVs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cnoThresh(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CnoThresh;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_staticHoldMaxDist(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::StaticHoldMaxDist;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_utcStandard(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UtcStandard;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Automatic", 0)
            .add("GPS", 3)
            .add("GLONASS", 6)
            .add("BeiDou", 7)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNav5Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res5(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_mask(false));
    props.append(createProps_dynModel(false));
    props.append(createProps_fixMode(false));
    props.append(createProps_fixedAlt(false));
    props.append(createProps_fixedAltVar(false));
    props.append(createProps_minElev(false));
    props.append(createProps_drLimit(false));
    props.append(createProps_pDop(false));
    props.append(createProps_tDop(false));
    props.append(createProps_pAcc(false));
    props.append(createProps_tAcc(false));
    props.append(createProps_staticHoldThresh(false));
    props.append(createProps_dgnssTimeout(false));
    props.append(createProps_cnoThreshNumSVs(false));
    props.append(createProps_cnoThresh(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_staticHoldMaxDist(false));
    props.append(createProps_utcStandard(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class CfgNav5Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgNav5<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgNav5Impl
    >
{
public:
    CfgNav5Impl() = default;
    CfgNav5Impl(const CfgNav5Impl&) = delete;
    CfgNav5Impl(CfgNav5Impl&&) = delete;
    virtual ~CfgNav5Impl() = default;
    CfgNav5Impl& operator=(const CfgNav5Impl&) = default;
    CfgNav5Impl& operator=(CfgNav5Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNav5::CfgNav5() : m_pImpl(new CfgNav5Impl) {}
CfgNav5::~CfgNav5() = default;

CfgNav5& CfgNav5::operator=(const CfgNav5& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNav5& CfgNav5::operator=(CfgNav5&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgNav5::MsgIdParamType CfgNav5::doGetId()
{
    return ::cc_ublox::message::CfgNav5<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgNav5::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNav5::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNav5::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNav5::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNav5::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNav5*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNav5::MsgIdParamType CfgNav5::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNav5::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNav5::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNav5::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNav5::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNav5::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
