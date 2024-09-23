// Generated by commsdsl2tools_qt v6.3.4

#include "MonHw.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MonAntPower.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MonAntStatus.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MonJammingState.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonHw.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_pinSel(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinSel;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_pinBank(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinBank;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_pinDir(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinDir;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_pinVal(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinVal;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_noisePerMS(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NoisePerMS;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_agcCnt(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AgcCnt;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_aStatus(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AStatus;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_monAntStatus(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_aPower(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::APower;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_monAntPower(Field::name(), serHidden);
    return props;
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "rtcCalib")
                .add(1U, "safeBoot")
                .asMap();
    }

    static QVariantMap createProps_jammingState(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::JammingState;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_monJammingState(Field::name(), serHidden);
        return props;
    }

    static QVariantMap createProps_bitsHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsHigh;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "xtalAbsent")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_bitsLow(true))
            .add(FlagsMembers::createProps_jammingState(true))
            .add(FlagsMembers::createProps_bitsHigh(true))
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_usedMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UsedMask;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_vP(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VP;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_jamInd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::JamInd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_pinIrq(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PinIrq;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_pullH(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PullH;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_pullL(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonHwFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::PullL;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_pinSel(false));
    props.append(createProps_pinBank(false));
    props.append(createProps_pinDir(false));
    props.append(createProps_pinVal(false));
    props.append(createProps_noisePerMS(false));
    props.append(createProps_agcCnt(false));
    props.append(createProps_aStatus(false));
    props.append(createProps_aPower(false));
    props.append(createProps_flags(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_usedMask(false));
    props.append(createProps_vP(false));
    props.append(createProps_jamInd(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_pinIrq(false));
    props.append(createProps_pullH(false));
    props.append(createProps_pullL(false));
    return props;
}

} // namespace

class MonHwImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonHw<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonHwImpl
    >
{
public:
    MonHwImpl() = default;
    MonHwImpl(const MonHwImpl&) = delete;
    MonHwImpl(MonHwImpl&&) = delete;
    virtual ~MonHwImpl() = default;
    MonHwImpl& operator=(const MonHwImpl&) = default;
    MonHwImpl& operator=(MonHwImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHw::MonHw() : m_pImpl(new MonHwImpl) {}
MonHw::~MonHw() = default;

MonHw& MonHw::operator=(const MonHw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw& MonHw::operator=(MonHw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonHw::MsgIdParamType MonHw::doGetId()
{
    return ::cc_ublox::message::MonHw<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonHw::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHw::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHw::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHw::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHw::MsgIdParamType MonHw::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHw::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHw::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHw::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHw::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHw::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
